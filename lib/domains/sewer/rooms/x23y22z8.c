inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 22, 8 }));
  set_short( "Hallway - x23y22z8" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y22z8.c",
  "north" : DIR+"/rooms/x23y23z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
