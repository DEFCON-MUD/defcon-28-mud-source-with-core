inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 28, 9 }));
  set_short( "Hallway - x7y28z9" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y28z9.c",
  "north" : DIR+"/rooms/x7y29z9.c",
  "south" : DIR+"/rooms/x7y27z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
