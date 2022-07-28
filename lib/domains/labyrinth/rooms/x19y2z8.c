inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 2, 8 }));
  set_short( "Hallway - x19y2z8" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y2z8.c",
  "east" : DIR+"/rooms/x20y2z8.c",
  "north" : DIR+"/rooms/x19y3z8.c",
  "south" : DIR+"/rooms/x19y1z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
