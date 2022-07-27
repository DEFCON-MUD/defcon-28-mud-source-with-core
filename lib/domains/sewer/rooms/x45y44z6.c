inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 44, 6 }));
  set_short( "Corridor - x45y44z6" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y44z6.c",
  "east" : DIR+"/rooms/x46y44z6.c",
  "north" : DIR+"/rooms/x45y45z6.c",
  "south" : DIR+"/rooms/x45y43z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
