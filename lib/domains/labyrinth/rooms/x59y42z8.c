inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 42, 8 }));
  set_short( "Hallway - x59y42z8" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y43z8.c",
  "south" : DIR+"/rooms/x59y41z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
