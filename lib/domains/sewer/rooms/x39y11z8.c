inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 11, 8 }));
  set_short( "Corridor - x39y11z8" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y12z8.c",
  "south" : DIR+"/rooms/x39y10z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
