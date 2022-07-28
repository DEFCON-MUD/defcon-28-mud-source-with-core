inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 16, 7 }));
  set_short( "Passage - x55y16z7" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y16z7.c",
  "north" : DIR+"/rooms/x55y17z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
