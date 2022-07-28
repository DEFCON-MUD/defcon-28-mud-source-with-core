inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 24, 1 }));
  set_short( "Hallway - x7y24z1" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y24z1.c",
  "east" : DIR+"/rooms/x8y24z1.c",
  "north" : DIR+"/rooms/x7y25z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
