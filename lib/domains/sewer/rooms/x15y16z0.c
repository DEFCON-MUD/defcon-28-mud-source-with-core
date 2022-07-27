inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 16, 0 }));
  set_short( "Corridor - x15y16z0" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y16z0.c",
  "east" : DIR+"/rooms/x16y16z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
