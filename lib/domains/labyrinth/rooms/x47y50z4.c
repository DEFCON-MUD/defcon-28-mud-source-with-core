inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 50, 4 }));
  set_short( "Corridor - x47y50z4" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y50z4.c",
  "east" : DIR+"/rooms/x48y50z4.c",
  "south" : DIR+"/rooms/x47y49z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
