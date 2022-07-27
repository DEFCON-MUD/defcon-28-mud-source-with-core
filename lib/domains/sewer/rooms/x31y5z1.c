inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 5, 1 }));
  set_short( "Corridor - x31y5z1" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y6z1.c",
  "south" : DIR+"/rooms/x31y4z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
