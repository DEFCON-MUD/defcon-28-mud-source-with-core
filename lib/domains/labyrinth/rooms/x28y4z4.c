inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 4, 4 }));
  set_short( "Hallway - x28y4z4" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y4z4.c",
  "east" : DIR+"/rooms/x29y4z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
