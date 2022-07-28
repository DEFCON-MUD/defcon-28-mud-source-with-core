inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 2, 5 }));
  set_short( "Hallway - x18y2z5" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y2z5.c",
  "east" : DIR+"/rooms/x19y2z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
