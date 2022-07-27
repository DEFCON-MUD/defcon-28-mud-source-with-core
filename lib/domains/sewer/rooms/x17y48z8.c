inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 48, 8 }));
  set_short( "Passage - x17y48z8" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y48z8.c",
  "north" : DIR+"/rooms/x17y49z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
