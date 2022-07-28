inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 28, 8 }));
  set_short( "Hallway - x45y28z8" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y28z8.c",
  "south" : DIR+"/rooms/x45y27z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
