inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 61, 7 }));
  set_short( "Hallway - x53y61z7" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y62z7.c",
  "south" : DIR+"/rooms/x53y60z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
