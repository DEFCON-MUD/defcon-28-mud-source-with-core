inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 18, 8 }));
  set_short( "Corridor - x17y18z8" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y19z8.c",
  "south" : DIR+"/rooms/x17y17z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
