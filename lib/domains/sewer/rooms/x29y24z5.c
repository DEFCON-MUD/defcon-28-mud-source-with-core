inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 24, 5 }));
  set_short( "Passage - x29y24z5" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y24z5.c",
  "south" : DIR+"/rooms/x29y23z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
