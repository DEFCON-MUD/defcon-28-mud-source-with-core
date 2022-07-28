inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 3, 2 }));
  set_short( "Corridor - x7y3z2" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y4z2.c",
  "south" : DIR+"/rooms/x7y2z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
