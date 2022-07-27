inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 44, 8 }));
  set_short( "Corridor - x41y44z8" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y44z8.c",
  "north" : DIR+"/rooms/x41y45z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
