inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 24, 6 }));
  set_short( "Corridor - x13y24z6" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y24z6.c",
  "north" : DIR+"/rooms/x13y25z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
