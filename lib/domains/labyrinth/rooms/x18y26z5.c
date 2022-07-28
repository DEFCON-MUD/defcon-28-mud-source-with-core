inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 26, 5 }));
  set_short( "Corridor - x18y26z5" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y26z5.c",
  "east" : DIR+"/rooms/x19y26z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
