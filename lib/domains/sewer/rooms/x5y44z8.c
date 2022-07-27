inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 44, 8 }));
  set_short( "Hallway - x5y44z8" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y44z8.c",
  "north" : DIR+"/rooms/x5y45z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
