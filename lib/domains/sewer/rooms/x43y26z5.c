inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 26, 5 }));
  set_short( "Corridor - x43y26z5" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y26z5.c",
  "north" : DIR+"/rooms/x43y27z5.c",
  "south" : DIR+"/rooms/x43y25z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
