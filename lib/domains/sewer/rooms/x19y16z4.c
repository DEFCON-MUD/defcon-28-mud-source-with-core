inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 16, 4 }));
  set_short( "Hallway - x19y16z4" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y16z4.c",
  "south" : DIR+"/rooms/x19y15z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
