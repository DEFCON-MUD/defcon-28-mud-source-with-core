inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 62, 7 }));
  set_short( "Hallway - x19y62z7" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y62z7.c",
  "east" : DIR+"/rooms/x20y62z7.c",
  "south" : DIR+"/rooms/x19y61z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
