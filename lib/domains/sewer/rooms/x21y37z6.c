inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 37, 6 }));
  set_short( "Corridor - x21y37z6" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y38z6.c",
  "south" : DIR+"/rooms/x21y36z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
