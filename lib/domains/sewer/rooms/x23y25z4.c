inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 25, 4 }));
  set_short( "Passage - x23y25z4" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y26z4.c",
  "south" : DIR+"/rooms/x23y24z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
