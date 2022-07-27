inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 4, 9 }));
  set_short( "Hallway - x47y4z9" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y5z9.c",
  "south" : DIR+"/rooms/x47y3z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
