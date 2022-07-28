inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 17, 1 }));
  set_short( "Hallway - x17y17z1" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y18z1.c",
  "south" : DIR+"/rooms/x17y16z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
