inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 48, 5 }));
  set_short( "Hallway - x55y48z5" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y48z5.c",
  "south" : DIR+"/rooms/x55y47z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
