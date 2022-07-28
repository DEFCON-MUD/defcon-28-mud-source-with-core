inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 5, 4 }));
  set_short( "Passage - x53y5z4" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y6z4.c",
  "south" : DIR+"/rooms/x53y4z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
