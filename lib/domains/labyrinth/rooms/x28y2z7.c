inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 2, 7 }));
  set_short( "Corridor - x28y2z7" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y2z7.c",
  "east" : DIR+"/rooms/x29y2z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
