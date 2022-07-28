inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 44, 2 }));
  set_short( "Passage - x53y44z2" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y44z2.c",
  "north" : DIR+"/rooms/x53y45z2.c",
  "south" : DIR+"/rooms/x53y43z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
