inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 55, 5 }));
  set_short( "Passage - x45y55z5" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y56z5.c",
  "south" : DIR+"/rooms/x45y54z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
