inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 4, 5 }));
  set_short( "Hallway - x3y4z5" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "south" : DIR+"/rooms/x3y3z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
