inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 48, 5 }));
  set_short( "Hallway - x7y48z5" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y48z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
