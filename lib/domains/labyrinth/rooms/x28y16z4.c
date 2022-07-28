inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 16, 4 }));
  set_short( "Hallway - x28y16z4" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y16z4.c",
  "east" : DIR+"/rooms/x29y16z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
