inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 6, 9 }));
  set_short( "Corridor - x43y6z9" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y6z9.c",
  "east" : DIR+"/rooms/x44y6z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
