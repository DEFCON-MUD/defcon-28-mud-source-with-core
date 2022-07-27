inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 54, 7 }));
  set_short( "Hallway - x37y54z7" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y54z7.c",
  "south" : DIR+"/rooms/x37y53z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
