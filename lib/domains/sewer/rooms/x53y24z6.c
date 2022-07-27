inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 24, 6 }));
  set_short( "Corridor - x53y24z6" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y24z6.c",
  "north" : DIR+"/rooms/x53y25z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
