inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 16, 9 }));
  set_short( "Hallway - x13y16z9" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y17z9.c",
  "south" : DIR+"/rooms/x13y15z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
