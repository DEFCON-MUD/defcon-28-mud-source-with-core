inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 34, 6 }));
  set_short( "Hallway - x39y34z6" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y34z6.c",
  "north" : DIR+"/rooms/x39y35z6.c",
  "south" : DIR+"/rooms/x39y33z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
