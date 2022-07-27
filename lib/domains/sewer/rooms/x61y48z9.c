inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 48, 9 }));
  set_short( "Passage - x61y48z9" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y48z9.c",
  "north" : DIR+"/rooms/x61y49z9.c",
  "south" : DIR+"/rooms/x61y47z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
