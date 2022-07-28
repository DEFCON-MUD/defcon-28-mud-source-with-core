inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 8, 5 }));
  set_short( "Corridor - x13y8z5" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y9z5.c",
  "south" : DIR+"/rooms/x13y7z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
