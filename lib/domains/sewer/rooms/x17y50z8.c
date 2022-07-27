inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 50, 8 }));
  set_short( "Corridor - x17y50z8" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y51z8.c",
  "south" : DIR+"/rooms/x17y49z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
