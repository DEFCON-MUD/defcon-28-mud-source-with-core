inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 49, 0 }));
  set_short( "Corridor - x37y49z0" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y50z0.c",
  "south" : DIR+"/rooms/x37y48z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
