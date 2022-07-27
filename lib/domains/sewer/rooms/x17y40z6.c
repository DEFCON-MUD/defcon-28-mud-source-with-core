inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 40, 6 }));
  set_short( "Hallway - x17y40z6" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y40z6.c",
  "north" : DIR+"/rooms/x17y41z6.c",
  "south" : DIR+"/rooms/x17y39z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
