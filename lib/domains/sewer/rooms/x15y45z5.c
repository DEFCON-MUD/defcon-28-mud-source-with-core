inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 45, 5 }));
  set_short( "Hallway - x15y45z5" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y46z5.c",
  "south" : DIR+"/rooms/x15y44z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
