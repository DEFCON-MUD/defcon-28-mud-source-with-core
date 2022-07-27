inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 49, 0 }));
  set_short( "Passage - x13y49z0" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y50z0.c",
  "south" : DIR+"/rooms/x13y48z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
