inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 17, 4 }));
  set_short( "Passage - x15y17z4" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y18z4.c",
  "south" : DIR+"/rooms/x15y16z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
