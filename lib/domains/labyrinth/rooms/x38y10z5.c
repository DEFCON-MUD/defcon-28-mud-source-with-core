inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 10, 5 }));
  set_short( "Corridor - x38y10z5" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y10z5.c",
  "east" : DIR+"/rooms/x39y10z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
