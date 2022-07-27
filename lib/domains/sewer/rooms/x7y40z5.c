inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 40, 5 }));
  set_short( "Hallway - x7y40z5" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y41z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north.%^RESET%^");
}
