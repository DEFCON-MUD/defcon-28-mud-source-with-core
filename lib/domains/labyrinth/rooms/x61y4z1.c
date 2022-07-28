inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 4, 1 }));
  set_short( "Corridor - x61y4z1" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y4z1.c",
  "north" : DIR+"/rooms/x61y5z1.c",
  "south" : DIR+"/rooms/x61y3z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
