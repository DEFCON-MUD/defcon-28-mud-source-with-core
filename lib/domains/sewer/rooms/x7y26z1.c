inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 26, 1 }));
  set_short( "Passage - x7y26z1" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y26z1.c",
  "south" : DIR+"/rooms/x7y25z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
